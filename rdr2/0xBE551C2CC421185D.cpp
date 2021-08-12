// beat_disabled_beggar.ysc @ L960
void func_19()
{
  vector3 vVar0;

  iLocal_542 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(uLocal_433[0], true, false), 0f, 0f, Local_99[0 /*32*/].f_9, 1f, 1f, 5f);
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_542))
  {
    PED::_0x7C00CFC48A782DC0(iLocal_542, uLocal_433[0], 0f, 0f, -0.1f, 0f, 0f, 0f, 2, 1);
  }
  iLocal_543 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_132.f_51, 0f, 0f, 0f, 2.5f, 2.5f, 5f);
  PED::_0x7C00CFC48A782DC0(iLocal_543, uLocal_433[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
  VOLUME::_0x5B23DFF8E0948BB2(iLocal_543, 0);
  VOLUME::_0xBE551C2CC421185D(iLocal_543, 1);
  func_104(&iLocal_541, Local_132.f_51, 0f, 0f, 0f, 2f, 2f, 5f, "NAV_BLOCKER");
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_541))
  {
    if (PATHFIND::_0x19C7567D2F2287D6(iLocal_541, 7))
    {
    }
  }
  vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_433[0], 0f, 2f, 0f) };
  func_105(&iLocal_544, vVar0, vLocal_96, 8f, 5f, 5f, "INTERACT_AREA");
  func_106(&uLocal_545, Local_132.f_51, 0f, 0f, 0f, 20f, 20f, 10f, 0, 16384, 0);
  func_107(&uLocal_540, &uLocal_546, Local_132.f_51, 0f, 0f, Local_132.f_51.f_3, 6f, 5f, 5f, 1, 534496, 1, 2, "AmbientBlocker");
  func_108(uLocal_540, 0);
}