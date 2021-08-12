// mudtown2.ysc @ L37485
bool func_811(var uParam0)
{
  AUDIO::_0x149AEE66F0CB3A99(1f, 1f);
  AUDIO::_0x8BF907833BE275DE(1f, 1f);
  AUDIO::START_AUDIO_SCENE("Mud_02_Outro_CS");
  iLocal_1204[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(-307.249f, 777.0742f, 117.7032f, joaat("VAL_BANK_INT_MAIN"));
  INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1204[1]);
  func_1285(uParam0, Local_119[2 /*9*/], 16);
  func_1285(uParam0, Local_119[0 /*9*/], 16);
  func_1285(uParam0, Local_119[1 /*9*/], 16);
  func_1293(uParam0, 4096);
  return uParam0->f_607 == uParam0->f_607;
}