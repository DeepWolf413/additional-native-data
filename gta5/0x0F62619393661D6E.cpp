// am_mp_solomon_office.ysc @ L2102
void func_63(int iParam0)
{
  if (func_50(joaat("s_m_y_cop_01")))
  {
    Local_578[iParam0] = PED::CREATE_PED(26, joaat("s_m_y_cop_01"), func_65(iParam0), func_64(iParam0), false, true);
    ENTITY::SET_ENTITY_INVINCIBLE(Local_578[iParam0], true);
    PED::_0x0F62619393661D6E(Local_578[iParam0], 1, 0);
    PED::SET_PED_CAN_RAGDOLL(Local_578[iParam0], false);
    PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_578[iParam0], false);
    AUDIO::STOP_PED_SPEAKING(Local_578[iParam0], true);
    ENTITY::FREEZE_ENTITY_POSITION(Local_578[iParam0], true);
  }
}