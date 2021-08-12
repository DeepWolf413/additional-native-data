// appmpjoblistnew.ysc @ L38569
void func_357(char* sParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
  int iVar0;
  char cVar1[32];
  
  if (*uParam3 == 0)
  {
    return;
  }
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 <= (iParam2 - 1))
  {
    StringCopy(&cVar1, sParam0, 32);
    StringConCat(&cVar1, "_BS", 32);
    StringIntConCat(&cVar1, iVar0, 32);
    if ((*uParam4)[iVar0] == 0 || iParam5 == 0)
    {
      (*uParam4)[iVar0] = DATAFILE::DATADICT_CREATE_ARRAY(*uParam3, &cVar1);
    }
    DATAFILE::DATAARRAY_ADD_INT((*uParam4)[iVar0], (*uParam1)[iVar0]);
    iVar0++;
  }
}