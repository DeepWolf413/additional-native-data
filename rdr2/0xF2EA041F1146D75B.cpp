// short_update.ysc @ L126323
void func_4222(var uParam0, var uParam1, bool bParam2)
{
  if (bParam2)
  {
    PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, uParam1->f_1, uParam1->f_2, uParam1->f_3, uParam1->f_4);
  }
  if (uParam1->f_8 != 0)
  {
    PED::_SET_TEXTURE_LAYER_PALLETE(*uParam0, uParam1->f_1, uParam1->f_8);
    PED::_SET_TEXTURE_LAYER_TINT(*uParam0, uParam1->f_1, uParam1->f_9, uParam1->f_10, uParam1->f_11);
  }
  if (uParam1->f_6 != 0)
  {
    PED::_SET_TEXTURE_LAYER_MOD(*uParam0, uParam1->f_1, uParam1->f_6, uParam1->f_13, uParam1->f_7);
  }
  if (uParam1->f_14 > 0f)
  {
    PED::_SET_TEXTURE_LAYER_ROUGHNESS(*uParam0, uParam1->f_1, uParam1->f_14);
  }
  PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(*uParam0, uParam1->f_1, uParam1->f_5);
  PED::_SET_TEXTURE_LAYER_ALPHA(*uParam0, uParam1->f_1, uParam1->f_12);
}