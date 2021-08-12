// camera_item.ysc @ L2315
void func_63()
{
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_23, " ");
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_24, " ");
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_25, " ");
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_26, " ");
  StringCopy(&cLocal_27, "", 32);
  MISC::_INT_TO_STRING(iLocal_14, "%i", &cLocal_27);
  StringConCat(&cLocal_27, " / ", 32);
  StringCopy(&cLocal_31, "", 32);
  MISC::_INT_TO_STRING(iLocal_15, "%i", &cLocal_31);
  StringConCat(&cLocal_27, &cLocal_31, 32);
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_22, &cLocal_27);
}