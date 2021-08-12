// av_dogs_playing.ysc @ L1769
bool func_28(var uParam0)
{
  PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[0 /*14*/]);
  PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[1 /*14*/]);
  if (!PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[0 /*14*/]) && !PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[1 /*14*/]))
  {
    return false;
  }
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
  {
    PED::_0x45FEA6D5539BD474(uParam0->f_20[0 /*14*/], "DogVerbalReactionResponse");
    PED::_0xE37ACEE15AC50C7E(uParam0->f_20[0 /*14*/], "DogVerbalReactionResponse");
  }
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
  {
    PED::_0x45FEA6D5539BD474(uParam0->f_20[1 /*14*/], "DogVerbalReactionResponse");
    PED::_0xE37ACEE15AC50C7E(uParam0->f_20[1 /*14*/], "DogVerbalReactionResponse");
  }
  return true;
}