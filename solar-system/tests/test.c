#include <check.h>
#include <stdlib.h>

START_TEST (test_1) { ck_assert (1); }
END_TEST

START_TEST (test_2) { ck_assert (0); }
END_TEST

Suite *
test_suite ()
{
  Suite *s = suite_create ("Test");
  TCase *tc = tcase_create ("Case");
  tcase_add_test (tc, test_1);
  tcase_add_test (tc, test_2);
  suite_add_tcase (s, tc);
  return s;
}

int
main (int argc, char *argv[argc + 1])
{
  Suite *s = test_suite ();
  SRunner *sr = srunner_create (s);
  srunner_run_all (sr, CK_NORMAL);
  int failed_count = srunner_ntests_failed (sr);
  srunner_free (sr);

  exit (failed_count ? EXIT_FAILURE : EXIT_SUCCESS);
}
