// odriscolls3.ysc @ L27328
void func_473(int iParam0)
{
  if (!CAM::DOES_CAM_EXIST(iLocal_1009[iParam0]))
  {
    return;
  }
  if (CAM::IS_CAM_ACTIVE(iLocal_1009[iParam0]))
  {
    CAM::SET_CAM_ACTIVE(iLocal_1009[iParam0], false);
  }
  if (CAM::IS_CAM_SHAKING(iLocal_1009[iParam0]))
  {
    CAM::STOP_CAM_SHAKING(iLocal_1009[iParam0], true);
  }
  CAM::DESTROY_CAM(iLocal_1009[iParam0], false);
}