// shop_horse_shop.ysc @ L3350
void func_44(var uParam0)
{
  func_296(&(Local_14.f_74), uParam0->f_2, uParam0->f_18, joaat("HORSEPOS"));
  func_296(&(Local_14.f_77), uParam0->f_2, uParam0->f_18, joaat("SHOPKEEPERPOS"));
  func_296(&(Local_14.f_86), uParam0->f_2, uParam0->f_18, joaat("COACHCAMPOS"));
  func_296(&(Local_14.f_89), uParam0->f_2, uParam0->f_18, joaat("COACHCAMROT"));
  func_297(&(Local_14.f_92), uParam0->f_2, uParam0->f_18, joaat("HORSEHEADING"));
  func_297(&(Local_14.f_93), uParam0->f_2, uParam0->f_18, joaat("SHOPKEEPERHEADING"));
  func_297(&(Local_14.f_95), uParam0->f_2, uParam0->f_18, joaat("COACHCAMFOV"));
  func_295(&(Local_14.f_96), uParam0->f_2, uParam0->f_18, joaat("NUMEXITLOCATIONS"));
  Local_14.f_74.f_2 = func_334(Local_14.f_74);
  if (!func_335() && func_336())
  {
    func_337(uParam0, 32);
    func_338(-753808305);
  }
  VOICE::_0x4791899615D70FA2(PLAYER::PLAYER_ID(), 64, 3);
}