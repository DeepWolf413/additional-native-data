// shoprobberies.ysc @ L8509
void func_309(var uParam0, int iParam1, int iParam2, int iParam3)
{
  func_271(&(uParam0->f_7[0 /*18*/]), &(uParam0->f_26));
  func_711(*uParam0);
  if (func_712(uParam0))
  {
    func_713(*uParam0, Global_36, 3, 0, 3);
    func_714(uParam0, &iParam2, iParam3, joaat("WEAPON_REVOLVER_CATTLEMAN"));
  }
  else
  {
    func_713(*uParam0, Global_36, 5, 0, 3);
    func_177(4194304);
    PED::SET_PED_CONFIG_FLAG(*uParam0, 44, false);
    func_286(*uParam0, 1, 0, 0, 1, 0);
    if (!LAW::_0x0EAF918F751F27BA(*uParam0))
    {
      PED::_0x935CF6E42BAF7F4D(*uParam0);
      TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam0, Global_35, 3, 176128, -1082130432 /* Float: -1f */, -1, 0);
    }
  }
}