// player_camp.ysc @ L5007
void func_126(var uParam0)
{
  func_132(&uLocal_21);
  CAM::_0x0E94C95EC3185FA9(&cLocal_29, uParam0->f_4, 0f, 0f, (uParam0->f_7 + cLocal_29.f_24));
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cLocal_29.f_16)))
  {
    CAM::_0x02389579A53C3276(&cLocal_29, &(cLocal_29.f_8), &(cLocal_29.f_16), -1);
  }
  else
  {
    CAM::_0xBC016635D6A73B31(&cLocal_29, &(cLocal_29.f_8), 5);
  }
}