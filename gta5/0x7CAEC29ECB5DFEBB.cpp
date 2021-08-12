// standard_global_reg.ysc @ L97769
void func_468(var* uParam0, char* sParam1)
{
  char cVar0[64];
  int iVar16;
  
  MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
  iVar16 = 0;
  while (iVar16 < *uParam0)
  {
    StringCopy(&cVar0, sParam1, 64);
    StringConCat(&cVar0, "_BestTime_", 64);
    StringIntConCat(&cVar0, iVar16, 64);
    MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar16], &cVar0);
    iVar16++;
  }
  MISC::STOP_SAVE_ARRAY();
}