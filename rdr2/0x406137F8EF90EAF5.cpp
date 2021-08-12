// fussar1.ysc @ L73584
bool func_1844(char[4] cParam0, bool bParam1)
{
  vector3 vVar0;

  vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1161, true, false) };
  func_2269();
  switch (iLocal_164)
  {
    case 0:
      func_2270(1);
    case 1:
      if (MISC::IS_BULLET_IN_AREA(vVar0, 0.15f, false) || bParam1)
      {
        func_2270(2);
      }
      break;
    case 2:
      ENTITY::SET_ENTITY_HAS_GRAVITY(iLocal_1161, true);
      OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_1161, true);
      ENTITY::FREEZE_ENTITY_POSITION(iLocal_1161, false);
      ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_1161, 1, 0.1f, 0f, 0f, vLocal_195, 0, false, true, true, false, true);
      PHYSICS::SET_DISABLE_BREAKING(iLocal_1161, false);
      OBJECT::_0xE7E4C198B0185900(iLocal_1161, 0, false);
      OBJECT::_0xE7E4C198B0185900(iLocal_1161, 1, false);
      AUDIO::_PLAY_SOUND_FROM_POSITION("Shoot_Lock", vVar0, 0, false, 0, true, 0);
      func_136(cParam0, 12);
      func_2271();
      func_2270(3);
    case 3:
      return true;
  }
  return false;
}