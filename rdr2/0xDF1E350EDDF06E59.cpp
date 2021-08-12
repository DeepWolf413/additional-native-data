// abigail2_1.ysc @ L83204
void func_2487(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
  if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
  {
    *iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_2097());
  }
}