// cv_amb_butcher_bleed_deer.ysc @ L347
bool func_1(var uParam0)
{
  if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_107[iLocal_14 /*113*/].f_5, true))
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iLocal_14 /*113*/].f_5))
    {
      PED::_0x39A2FC5AF55A52B1(uParam0->f_107[iLocal_14 /*113*/].f_5, -1);
      PED::_0x36E4B61DC56DE77C(uParam0->f_107[iLocal_14 /*113*/].f_5, 200f, 201f, 10000000, 1);
      ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_107[iLocal_14 /*113*/].f_5));
    }
  }
  return true;
}