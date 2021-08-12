// beat_booby_trap.ysc @ L4212
void func_134()
{
  if (!func_40(36))
  {
    if (func_40(35))
    {
      if ((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERRUPTIBLE")) || (iLocal_411 == 0 && func_264(&Local_327, Global_35, "player", 1))) || (iLocal_411 == 1 && func_264(&Local_348, Global_35, "player", 1)))
      {
        func_18(36);
        PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
        func_140(43);
        bLocal_1260 = true;
      }
    }
  }
  else if (bLocal_1260)
  {
    if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
    {
      if (func_265(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED"))
      {
        func_266();
      }
      bLocal_1260 = false;
    }
  }
}