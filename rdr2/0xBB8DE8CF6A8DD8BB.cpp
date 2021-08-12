// gang3.ysc @ L35732
int func_773(char[4] cParam0)
{
  int iVar0;

  PED::_SET_PED_CROUCH_MOVEMENT(Local_207[0 /*9*/], false, 0, false);
  PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
  PED::SET_PED_CONFIG_FLAG(Global_35, 218, true);
  PED::RESET_PED_LAST_VEHICLE(Global_35);
  func_140(cParam0, func_33(cParam0), 16777216);
  if (PED::IS_PED_ON_MOUNT(Global_35))
  {
    iVar0 = PED::GET_MOUNT(Global_35);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, 3195.115f, -599.1196f, 41.7766f, 153.5157f, true, false, true);
      TASK::TASK_STAND_STILL(iVar0, -1);
    }
  }
  TASK::CLEAR_PED_TASKS(Global_35, true, false);
  if (func_1315())
  {
    func_1273(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
    WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
    WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
  }
  _NAMESPACE29::_0x0EABF182FBB63D72(Local_207[0 /*9*/], 8, 1);
  return 1;
}