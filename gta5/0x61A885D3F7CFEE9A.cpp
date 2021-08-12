// appmpjoblistnew.ysc @ L38621
void func_362()
{
  if (func_370())
  {
    NETWORK::UGC_CLEAR_OFFLINE_QUERY();
  }
  else
  {
    NETWORK::UGC_CLEAR_QUERY_RESULTS();
  }
}