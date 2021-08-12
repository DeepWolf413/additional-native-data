// beat_savage_wagon.ysc @ L2292
void func_69()
{
  PED::APPLY_PED_DAMAGE_PACK(uLocal_342[2], "PD_Savage_Wagon_Horse_Arrow_Wounds", 0f, 1f);
  PED::APPLY_PED_DAMAGE_PACK(uLocal_342[3], "PD_Savage_Wagon_Horse_Arrow_Wounds", 0f, 1f);
  PED::_SET_PED_BODY_COMPONENT(uLocal_342[3], -1413962767);
  PED::_0xA2B8E47442C76CEC(uLocal_342[3], -1758176869);
  PED::_UPDATE_PED_VARIATION(uLocal_342[3], false, true, true, true, false);
  PED::_SET_PED_BODY_COMPONENT(uLocal_342[2], -1413962767);
  PED::_0xA2B8E47442C76CEC(uLocal_342[2], -1758176869);
  PED::_UPDATE_PED_VARIATION(uLocal_342[2], false, true, true, true, false);
}