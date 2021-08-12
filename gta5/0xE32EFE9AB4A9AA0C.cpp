// exile3.ysc @ L129742
void func_953(char* sParam0, bool bParam1, bool bParam2)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_871, false))
  {
    func_911(bParam1, bParam2);
    CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_897, iLocal_1301, sParam0, func_236(2));
  }
}