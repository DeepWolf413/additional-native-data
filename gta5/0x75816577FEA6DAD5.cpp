// fm_capture_creator.ysc @ L162587
void func_1266(var uParam0)
{
  if (STREAMING::IS_MODEL_VALID(joaat("mp_m_freemode_01")) && STREAMING::IS_MODEL_A_PED(joaat("mp_m_freemode_01")))
  {
    STREAMING::REQUEST_MODEL(joaat("mp_m_freemode_01"));
    if (STREAMING::HAS_MODEL_LOADED(joaat("mp_m_freemode_01")))
    {
      uParam0->f_795 = PED::CREATE_PED(26, joaat("mp_m_freemode_01"), uParam0->f_3, 0f, false, true);
      if (func_1265(uParam0->f_795))
      {
        ENTITY::SET_ENTITY_VISIBLE(uParam0->f_795, false, false);
        ENTITY::SET_ENTITY_COLLISION(uParam0->f_795, false, false);
        ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_795, true);
        ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_795, false);
      }
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("mp_m_freemode_01"));
    }
  }
}