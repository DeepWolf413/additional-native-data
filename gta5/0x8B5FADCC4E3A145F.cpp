// appmpjoblistnew.ysc @ L6537
void func_151(var uParam0, var uParam1, var uParam2)
{
  int iVar0;
  var* uVar1[16];
  
  *uParam0 = unk_0x4D9115464D37FCEB(0);
  if (*uParam0 == 0)
  {
  }
  *uParam1 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "list");
  uParam2->f_10 = 1;
  uParam2->f_65 = DATAFILE::DATAARRAY_GET_COUNT(*uParam1);
  iVar0 = 0;
  while (iVar0 <= (uParam2->f_65 - 1))
  {
    uVar1[iVar0] = DATAFILE::DATAARRAY_GET_DICT(*uParam1, iVar0);
    StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), DATAFILE::DATADICT_GET_STRING(uVar1[iVar0], "cid"), 24);
    iVar0++;
  }
  uParam2->f_10 = DATAFILE::DATADICT_GET_BOOL(*uParam0, "h2h");
  uParam2->f_9 = DATAFILE::DATADICT_GET_BOOL(*uParam0, "ch");
  if (func_370())
  {
    StringCopy(&(uParam2->f_12), DATAFILE::DATADICT_GET_STRING(*uParam0, "name"), 64);
  }
}