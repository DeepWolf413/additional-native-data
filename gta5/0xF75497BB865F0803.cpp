// agency_heist3b.ysc @ L115724
void func_778(bool bParam0)
{
  if (WEAPON::HAS_PED_GOT_WEAPON(func_117(), iLocal_373, false))
  {
    WEAPON::SET_CURRENT_PED_WEAPON(func_117(), iLocal_373, false);
    if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_117(), iLocal_373) < 240)
    {
      WEAPON::SET_PED_AMMO(func_117(), iLocal_373, 240, false);
    }
  }
  else
  {
    WEAPON::GIVE_WEAPON_TO_PED(func_117(), iLocal_373, 240, true, true);
  }
  if (bParam0)
  {
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_117(), Local_408, 1000, true, 0.5f, true, false, Local_631[0 /*20*/].f_1, false);
  }
  else
  {
    ENTITY::SET_ENTITY_COORDS(func_117(), Local_408, true, false, false, true);
    ENTITY::SET_ENTITY_HEADING(func_117(), 339.1769f);
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_117(), Local_408, 1000, true, 0f, true, false, Local_631[0 /*20*/].f_1, false);
  }
  PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_117(), true, false);
  PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_117(), 150.5477f, -761.1173f, 257.1522f, 1.5f, false, false);
  iLocal_3853[6] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 150.9026f, -762.486f, 258.6959f, -5.6055f, -3.5952f, -172.9336f, 10f, false, 2);
  CAM::SHAKE_CAM(iLocal_3853[6], "HAND_SHAKE", 0.1f);
  Local_6520 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3865[2 /*2*/], Local_6523) };
  CAM::POINT_CAM_AT_COORD(iLocal_3853[6], Local_6520);
  iLocal_6519 = 3;
}