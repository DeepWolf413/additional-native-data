// spd_poorjoe1.ysc @ L477
void func_11(var uParam0, var uParam1, var uParam2)
{
  if (ENTITY::IS_ENTITY_DEAD(uParam0->f_146[0]) || ENTITY::IS_ENTITY_DEAD(Global_35))
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
  {
    return;
  }
  if (!func_59(*uParam2, 1024))
  {
    if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*uParam1, uParam0->f_146[0]))
    {
    }
    else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*uParam1, Global_35))
    {
      PED::APPLY_DAMAGE_TO_PED(Global_35, 20, 0, 64826, *uParam1);
      CAM::SHAKE_GAMEPLAY_CAM("JOLT_SHAKE", 0.5f);
      AUDIO::_PLAY_SOUND_FROM_ENTITY("Stone_Hit_Player", Global_35, "SP_Poor_Joe_Sounds", false, 0, 0);
      AUDIO::_0xA6847BBA4FCDD13F(Global_35, "PAIN_LOW");
      PED::SET_PED_TO_RAGDOLL(Global_35, 0, 0, 1, false, false, false);
      ENTITY::APPLY_FORCE_TO_ENTITY(Global_35, 1, Vector(3.5f, 3.5f, 3.5f) * func_79(Global_36 - ENTITY::GET_ENTITY_COORDS(*uParam1, false, false)), 0f, 0f, 0f, 0, false, false, true, false, true);
      func_63(uParam2, 1024);
    }
    else if (!ENTITY::IS_ENTITY_IN_AIR(*uParam1, 0))
    {
      AUDIO::_PLAY_SOUND_FROM_ENTITY("Stone_Miss_Player", Global_35, "SP_Poor_Joe_Sounds", false, 0, 0);
      func_63(uParam2, 1024);
    }
  }
}