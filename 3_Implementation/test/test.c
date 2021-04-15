#include "unity.h"
#include "Branch.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME "College Management System"

/* Prototypes for all the test functions */
void test_getdetailsroom(void);
void test_getdetailsprof(void);
void test_getdetails(void);
void test_getdetailscommittee(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_getdetailsroom);
  RUN_TEST(test_getdetailsprof);
  RUN_TEST(test_getdetails);
  RUN_TEST(test_getdetailscommittee);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_getdetailsroom(void) {
  
  room d1=getdetailsroom(101);
  TEST_ASSERT_EQUAL(1,d1.floor );
  TEST_ASSERT_EQUAL(101, d1.room_num);
  TEST_ASSERT_EQUAL(1, d1.booked);
  TEST_ASSERT_EQUAL("ESA", d1.booked_by);
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(d1, getdetailsroom(401));
}

void test_getdetailsprof(void) {
  professor p1=getdetailsprof(11);
  TEST_ASSERT_EQUAL("RGS",p1.name );
  TEST_ASSERT_EQUAL("Phd",p1.degree );
  TEST_ASSERT_EQUAL(11,p1.pid );
  TEST_ASSERT_EQUAL(1,p1.did);
  
 
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(p1, getdetailsprof(12));
}

void test_getdetails(void) {
  subject s1=getdetails(1001);


  TEST_ASSERT_EQUAL("AE",s1.name );
  TEST_ASSERT_EQUAL(1001,s1.sid );
  TEST_ASSERT_EQUAL(1,s1.did );
  TEST_ASSERT_EQUAL(1,s1.pid );
  
  /* Dummy fail*/
 // TEST_ASSERT_EQUAL(s1, getdetails(1002));
}

void test_getdetailscommittee(void) {

  committee c1 =getdetailscommittee(10001)

  TEST_ASSERT_EQUAL("ESA", c1.name );
  TEST_ASSERT_EQUAL(10001, c1.cid);
  TEST_ASSERT_EQUAL("RGS", c1.cpname);
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(c1, getdetailscommittee(10002));
}