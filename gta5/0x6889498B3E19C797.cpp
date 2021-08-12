// fm_capture_creator.ysc @ L36144
void func_562(var uParam0, var uParam1)
{
  int iVar0;
  
  iVar0 = DATAFILE::DATAARRAY_ADD_DICT(*uParam0);
  DATAFILE::DATADICT_SET_INT(iVar0, "pedID", *uParam1);
  func_563(&iVar0, &(uParam1->f_1));
}