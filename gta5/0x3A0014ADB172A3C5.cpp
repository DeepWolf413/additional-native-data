// appmpjoblistnew.ysc @ L9131
void func_198(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "fsp");
  iVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "loc");
  iVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "head");
  iVar0 = 0;
  while (iVar0 < 60)
  {
    if (iVar2 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar2, iVar0) == 5)
    {
      Global_4718592.f_160424[iVar0 /*5*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar2, iVar0) };
      Global_4718592.f_160424[iVar0 /*5*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(iVar3, iVar0);
    }
    else
    {
      Global_4718592.f_160424[iVar0 /*5*/] = { 0f, 0f, 0f };
      Global_4718592.f_160424[iVar0 /*5*/].f_3 = 0f;
    }
    iVar0++;
  }
}