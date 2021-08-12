// camp_guarma.ysc @ L1432
void func_42(int iParam0)
{
  if (!func_264(4096))
  {
    if (!OBJECT::DOES_PICKUP_EXIST(iParam0->f_3493))
    {
      iParam0->f_3493 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_SHOTGUN_DOUBLEBARREL"), 1432.942f, -7331.263f, 81.3949f, 90f, 0f, 180f, 8192, -1, 2, true, 0, 0, 0f, 0);
    }
    else if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iParam0->f_3493))
    {
      func_265(joaat("AMMO_SHOTGUN"), 10, 1, 0, 0, 752097756, 0, 0, 0, 0);
      func_75(4096);
    }
  }
  if (!func_264(2048))
  {
    if (!OBJECT::DOES_PICKUP_EXIST(iParam0->f_3493.f_1))
    {
      iParam0->f_3493.f_1 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_PISTOL_VOLCANIC"), 1432.168f, -7330.875f, 81.37f, 90f, 150f, 135f, 0, -1, 2, true, 0, 0, 0f, 0);
    }
    else if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iParam0->f_3493.f_1))
    {
      func_265(joaat("AMMO_PISTOL"), 24, 1, 0, 0, 752097756, 0, 0, 0, 0);
      func_75(2048);
      func_266(joaat("WEAPON_PISTOL_VOLCANIC"));
    }
  }
}