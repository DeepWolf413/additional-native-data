// cv_cc_abi_05.ysc @ L11017
bool func_348()
{
  int iVar0;
  int iVar1;

  if (!TASK::_0xEC7E480FF8BD0BED(Global_35))
  {
    return false;
  }
  iVar0 = TASK::_0x05A0100EA714DB68(Global_35, 0);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return false;
  }
  iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
  if (!STREAMING::IS_MODEL_VALID(iVar1))
  {
    return false;
  }
  if (((iVar1 == joaat("P_MUGCOFFEE01X") || iVar1 == joaat("P_BOTTLEJD01X")) || iVar1 == joaat("P_BOTTLEBEER01A")) || iVar1 == joaat("P_BOWL04X_STEW"))
  {
    return false;
  }
  return true;
}