// grays2.ysc @ L71156
bool func_1874()
{
  if (func_1271(Global_35, iLocal_494, 1, 0) && iLocal_618 == 2048)
  {
    if ((PED::IS_PED_FALLING(Global_35) || PED::IS_PED_RAGDOLL(Global_35)) || PED::IS_PED_VAULTING(Global_35))
    {
      return false;
    }
    if (PED::IS_PED_FACING_PED(Global_35, iLocal_432[2], 90f))
    {
      return true;
    }
    if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0) && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
    {
      return true;
    }
  }
  return false;
}