# Realistic schemas:
Token=TokID
TokID=snappy(Occnum,(DocID,Offset))
DocID=snappy(TokID)


## Considerations
- Yes/no snappy on TokID content
- Yes/no snappy on Token


# Schema of TokID on disk
Occnum, File, Offset
8b, (8b, 8b)

# TokID in memory
`std::unordered_map<uint64_t File, uint64_t Offset>`

--------------------------------------------------------------------------------------
## TokID/no TokID
`Token = TokID` vs nothing
Advantages:
- tokens dont have to be fully stored all the time, meaning files can be stored in little space
- allows UpscaleDB to use the faster more compact pax schema
- potentially allows TokID compression
Drawbacks:
- None?
- Useless if files are not stored which is necessary

## File/no File
`File=Tokens` vs nothing
Advantages: allows removing file without slow full scan and without knowing the content
Disadvantages: keeps a new copy of all files

## Serialize/Duplicate
`TokID = File,Offset` vs `TokID=(File,Offset)`
Duplication advantages:
- ? 
Serialization advantages:
- Necessary for pax schema which is supposedly faster
- Easier to parse the upscaledb (no cursors etc necessary) 

## Compression (snappy?)
TokID=snappy(File,Offset)
Adv: reading might be sped up, smaller index size
Disadv: reading might be slower as well, or writes.

## Token compression
Adv: might be smaller
Disadv: might be pointless
