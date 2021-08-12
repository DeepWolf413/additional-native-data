// director_mode.ysc @ L147575
void func_1151()
{
  if (CAM::_0x5C48A1D6E3B33179(iLocal_11647))
  {
    fLocal_11654 = (fLocal_11654 + (fLocal_11542 * fLocal_11658));
    Local_11648.f_2 = fLocal_11654;
    CAM::SET_CAM_COORD(iLocal_11647, Local_11521 + Local_11648);
  }
  else
  {
    Local_11648 = { Vector(0f, SYSTEM::COS(fLocal_11653), -SYSTEM::SIN(fLocal_11653)) * Vector(fLocal_11655, fLocal_11655, fLocal_11655) + Vector(fLocal_11654, 0f, 0f) };
    CAM::SET_CAM_COORD(iLocal_11647, Local_11521 + Local_11648);
  }
  CAM::POINT_CAM_AT_ENTITY(iLocal_11647, Local_11521.f_11, 0f, 0f, func_1065(fLocal_11654, (Local_11521.f_6.f_2 / 2f)), true);
  ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_11521.f_11, 0f, -2f, 15f), true, false, false, true);
  ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_11521.f_3.f_2);
}