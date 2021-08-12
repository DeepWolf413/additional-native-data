// bjack_sp.ysc @ L36032
char* func_1225()
{
  char cVar0[64];

  StringCopy(&cVar0, "share/", 64);
  StringConCat(&cVar0, NETWORK::_NETWORK_GET_ROS_TITLE_NAME(), 64);
  StringConCat(&cVar0, "/pedshots/", 64);
  return func_1227(cVar0);
}