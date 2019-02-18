#include <sqlite3.h>

sqlite3* db;

int setup(char* indexfile) {
	sqlite3 *db;
	int err = sqlite3_open(indexfile, &db);
	if (rc != SQLITE_OK) {
		// Log an error
		return -1;
	}
}
