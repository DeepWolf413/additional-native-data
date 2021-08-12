// rcm_gang02.ysc @ L13897
void func_414()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 2)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_16[iVar0 /*10*/]))
    {
      PED::SET_PED_CONFIG_FLAG(Local_16[iVar0 /*10*/], 214, false);
    }
    func_169(&(Local_16[iVar0 /*10*/]), 1, 0, 1);
    iVar0++;
  }
  if (PED::_0x91A5F9CBEBB9D936(uLocal_38))
  {
    PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_38, false);
  }
  func_930(2961.153f, 471.2892f, 51.52034f, 20f, 5);
  func_420(iLocal_37);
  if (AUDIO::_0xE600F61F54A444A6())
  {
    func_801("RGNG01_RIDE_STOP", 0);
    func_306(&iLocal_14, 256);
  }
}