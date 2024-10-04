#include <glib.h>

static void test_case (void)
{
    gint x = 2, y = 3, z = 5;

    g_print("%s \n", x+y==z ? "Equal" : "Not equal");
    
}

gint main(gint argc, gchar **argv)
{
    g_test_init(&argc, &argv, NULL);

    g_test_add_func("/test/aaa", test_case);

    return g_test_run();
}
