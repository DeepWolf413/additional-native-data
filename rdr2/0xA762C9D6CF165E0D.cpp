// beat_hostage_rescue.ysc @ L6074
void func_174()
{
  if (iLocal_527 == 1)
  {
    func_29(131072);
  }
  if (!func_22(131072))
  {
    if (func_186(iLocal_510[0], "LOCO_SWAP", 1067030938 /* Float: 1.2f */))
    {
      PED::_0x935CF6E42BAF7F4D(iLocal_510[0]);
      PED::_0x89F5E7ADECCCB49C(iLocal_510[0], "injured_right_arm");
      PED::SET_PED_CONFIG_FLAG(iLocal_510[0], 336, true);
      PED::_SET_PED_BLACKBOARD_HASH(iLocal_510[0], "OverloadMostInjuredBodyPart", "rightarm", -1);
      func_29(131072);
    }
  }
}