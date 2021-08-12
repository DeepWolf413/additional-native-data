// av_hobo_train_hop.ysc @ L1975
int func_32(var uParam0, var uParam1)
{
  if (func_82(iLocal_49))
  {
    func_83(iLocal_49);
  }
  if (bLocal_12)
  {
    VEHICLE::DELETE_MISSION_TRAIN(&iLocal_42);
    return 1;
  }
  else if (VEHICLE::_0x0516FAE561276EFC(uLocal_43))
  {
    VEHICLE::_0x615B3B8E73634509(uLocal_43, 60f);
    VEHICLE::_0x15206E88FF7617DF(uLocal_43, func_84(iLocal_49));
    VEHICLE::_0x63509DDF102E08E8(uLocal_43, func_85(iLocal_49));
    return 1;
  }
  func_86(uParam0, 1, 1, 0);
  return 0;
}