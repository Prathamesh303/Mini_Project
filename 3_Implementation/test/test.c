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
  room d1={1,101, 1, "ESA"};
  room d2={2 ,201 ,1 ,"ESA"};
  TEST_ASSERT_EQUAL(d1, getdetailsroom(101));
  TEST_ASSERT_EQUAL(d2, getdetailsroom(201));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(d1, getdetailsroom(401));
}

void test_getdetailsprof(void) {
  professor p1={"RGS" ,"Phd", 11, 1};
  professor p2={"DKB" ,"Phd" ,31 ,3}
  TEST_ASSERT_EQUAL(p1, getdetailsprof(11));
  TEST_ASSERT_EQUAL(p2, getdetailsprof(31));
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(p1, getdetailsprof(12));
}

void test_getdetails(void) {
  subject s1={"AE", 1001, 1, 1};
  TEST_ASSERT_EQUAL(s1, getdetails(1001));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(s1, getdetails(1002));
}

void test_getdetailscommittee(void) {
  committee c1={"ESA" ,10001 ,RGS};
  TEST_ASSERT_EQUAL(c1, getdetailscommittee(10001));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(c1, getdetailscommittee(10002));
}