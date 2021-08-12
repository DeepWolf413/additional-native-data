// gang3.ysc @ L35262
int func_751(char[4] cParam0)
{
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_207[1 /*9*/], true);
  func_58(cParam0, 1);
  if (func_120(cParam0, 4))
  {
    func_888(Local_226[0 /*9*/], 2890.326f, -197.7096f, 40.898f, 11.3412f, 2, 1073741824 /* Float: 2f */);
  }
  if (func_163(Local_207[0 /*9*/], 0))
  {
    WEAPON::SET_CURRENT_PED_WEAPON(Local_207[0 /*9*/], joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), true, 0, false, false);
  }
  VEHICLE::SET_RANDOM_BOATS(false);
  return 1;
}