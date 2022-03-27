#include"library_Managment_system.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}


void test_add(void){
    TEST_ASSERT_EQUAL(pass,add(125, "Sonika", "Dragon"));
}

void test_view(void){
    TEST_ASSERT_EQUAL(pass,view());
}

void test_search(void){
    TEST_ASSERT_EQUAL(fail,search(-2));
    TEST_ASSERT_EQUAL(pass,search(125));
}



void test_delete(void){
    TEST_ASSERT_EQUAL(pass,delete(125));
}        

void test_issue(void){
    TEST_ASSERT_EQUAL(pass,issue(125));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_add);
    RUN_TEST(test_search);
    RUN_TEST(test_issue);
    RUN_TEST(test_delete);
    RUN_TEST(test_view);
    
    return UNITY_END();
}
