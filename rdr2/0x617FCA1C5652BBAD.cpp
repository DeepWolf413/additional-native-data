// act_fishing01.ysc @ L21532
void func_591()
{
  char* sVar0;
  var uVar1;

  if (Global_40.f_11184[0] != joaat("UPGRADE_FSH_BAIT_NONE"))
  {
    if (!func_289())
    {
      Global_40.f_11184[0] = joaat("UPGRADE_FSH_BAIT_NONE");
      sVar0 = func_957(func_956(joaat("UPGRADE_FSH_BAIT_NONE")), joaat("COLOR_PURE_WHITE"));
      uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Fishing");
      DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar1, "LureName", sVar0);
      DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar1, "LureCount", "");
      DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar1, "LureTexture", -973584697);
    }
  }
}