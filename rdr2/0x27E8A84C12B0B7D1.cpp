// mudtown2.ysc @ L37384
bool func_807(var uParam0)
{
  PED::REGISTER_TARGET(Local_165[10 /*9*/], Global_35, 1);
  func_1270(uParam0);
  StringCopy(&Local_1172, "mud2_orbit_camera", 64);
  StringCopy(&(Local_1172.f_8), "FINISH_OFF_BRAWLER_ORBIT_REQUEST", 64);
  CAM::_0x6A4D224FC7643941(&Local_1172);
  func_234(&(vLocal_1035[8 /*3*/]));
  func_234(&(vLocal_1035[10 /*3*/]));
  func_234(&(vLocal_1035[19 /*3*/]));
  func_234(&(vLocal_1035[20 /*3*/]));
  func_179(&iLocal_117, 2);
  PED::APPLY_PED_DAMAGE_PACK(Local_119[2 /*9*/], "PD_Mud2_Bill_Melee", 0f, 1f);
  PED::APPLY_PED_DAMAGE_PACK(Local_119[0 /*9*/], "PD_Mud2_Javier_Melee3", 0f, 1f);
  PED::APPLY_PED_DAMAGE_PACK(Local_119[0 /*9*/], "PD_Mud2_Javier_Melee4", 0f, 1f);
  PED::_0x27E8A84C12B0B7D1(Local_165[10 /*9*/], 932795216, 1);
  PED::_0x27E8A84C12B0B7D1(Local_165[10 /*9*/], -1455578863, 1);
  return uParam0->f_607 == uParam0->f_607;
}