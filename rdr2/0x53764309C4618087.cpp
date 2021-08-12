// property_use_core.ysc @ L4186
bool func_143(var uParam0, int iParam1)
{
  char* sVar0;
  int iVar1;

  if (iParam1 == -1)
  {
    func_139(uParam0, 3);
    return false;
  }
  if (func_359(uParam0) > IntToFloat(func_360(1)))
  {
    func_139(uParam0, 3);
    return false;
  }
  if (!func_361(uParam0, iParam1))
  {
    return false;
  }
  sVar0 = func_362(iParam1);
  iVar1 = MISC::GET_HASH_KEY(sVar0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
  {
    STREAMING::_0x53764309C4618087(iVar1);
  }
  return true;
}