#include <mysql.h>
#include <stdio.h>


int main(void) {

  printf("mysql client version: %s\n", mysql_get_client_info());

  return 0;
}
