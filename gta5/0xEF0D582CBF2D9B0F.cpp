// am_mp_hangar.ysc @ L31071
int func_422()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_2065.f_1434))
  {
    if (func_12(joaat("s_m_m_fiboffice_02")))
    {
      Local_2065.f_1434 = PED::CREATE_PED(4, joaat("s_m_m_fiboffice_02"), -1266.801f, -2970.337f, -49.4897f, 180f, false, false);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_fiboffice_02"));
      ENTITY::SET_ENTITY_INVINCIBLE(Local_2065.f_1434, true);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2065.f_1434, true);
      PED::SET_PED_COMPONENT_VARIATION(Local_2065.f_1434, 0, 1, 1, 0);
      PED::SET_PED_COMPONENT_VARIATION(Local_2065.f_1434, 3, 0, 1, 0);
      PED::SET_PED_COMPONENT_VARIATION(Local_2065.f_1434, 4, 0, 1, 0);
      PED::APPLY_PED_BLOOD_SPECIFIC(Local_2065.f_1434, 1, 0.55f, 0.72f, 307.546f, 1f, 3, 0f, "BulletLarge");
    }
  }
  if (!ENTITY::DOES_ENTITY_EXIST(Local_2065.f_1434))
  {
    return 0;
  }
  if (!PED::IS_PED_INJURED(Local_2065.f_1434))
  {
    if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_2065.f_1434))
    {
      return 0;
    }
  }
  return 1;
}