// short_update.ysc @ L45344
void func_1392(bool bParam0)
{
  if (!WEAPON::HAS_PED_GOT_WEAPON(Global_1357549.f_1497.f_3, joaat("WEAPON_REPEATER_CARBINE"), 0, true))
  {
    if (bParam0)
    {
      TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1357549.f_1497.f_3, false, true);
      PED::_0x2208438012482A1A(Global_1357549.f_1497.f_3, false, false);
    }
    WEAPON::_0xECBB26529A737EF6(0);
    WEAPON::_0x899A04AFCC725D04(Global_1357549.f_1497.f_3, joaat("LO_GANG_COMPANION_GUARD"));
  }
}