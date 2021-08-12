// drunk.ysc @ L4647
void func_149()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_1))
  {
    return;
  }
  if (!PED::IS_PED_INJURED(Local_43.f_1))
  {
    PED::RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 0.25f);
    PED::RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
    PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -8f);
    Local_60.f_2 = "";
    PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
    PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, false);
    PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, false);
    PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, true);
    PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, false);
    AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, false);
  }
  if (!bLocal_51)
  {
    return;
  }
  bLocal_51 = false;
}