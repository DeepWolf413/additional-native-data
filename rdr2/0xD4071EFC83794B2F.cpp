// shop_doctor.ysc @ L56302
int func_1664(var uParam0, var uParam1)
{
  switch (*uParam1)
  {
    case 777890122:
      break;
    case -1502467280:
      break;
    case -772187037:
      if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_148.f_1281))
      {
        WEAPON::_SET_WEAPON_LEVEL_THRESHOLD(uParam0->f_148.f_1281, 1f);
        WEAPON::_SET_WEAPON_SOOT(uParam0->f_148.f_1281, 0f, false);
        WEAPON::_SET_WEAPON_DIRT(uParam0->f_148.f_1281, 0f, false);
        WEAPON::_SET_WEAPON_DAMAGE(uParam0->f_148.f_1281, 0f, false);
      }
      break;
  }
  return 1;
}