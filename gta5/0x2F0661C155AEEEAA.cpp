// fm_capture_creator.ysc @ L36130
void func_561(var uParam0, var* uParam1)
{
  var* uVar0;
  int iVar1;
  
  uVar0 = DATAFILE::DATADICT_CREATE_ARRAY(uParam1, "plrPH");
  iVar1 = 0;
  while (iVar1 <= 1)
  {
    DATAFILE::DATAARRAY_ADD_STRING(uVar0, uParam0[iVar1 /*6*/]);
    iVar1++;
  }
}