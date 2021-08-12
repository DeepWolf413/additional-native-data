// am_casino_peds.ysc @ L366864
void func_5310(var uParam0, int iParam1)
{
  if (func_5298(uParam0, iParam1))
  {
    switch (iParam1)
    {
      case 0:
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 0, "anim@move_f@waitress", "idle", 8f, true);
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 1, "anim@move_f@waitress", "walk", 8f, true);
        break;
      
      case 1:
      case 2:
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 0, "anim@move_m@security_guard", "idle", 8f, true);
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 1, "anim@move_m@security_guard", "walk", 8f, true);
        break;
      
      case 3:
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 0, "random@security_van", "sec_idle", 8f, true);
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 1, "random@security_van", "sec_walk_calm", 8f, true);
        break;
      }
  }
}