// beat_drunk_dueler.ysc @ L6743
void func_159()
{
  int iVar0;

  DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_3, false);
  iVar0 = 0;
  while (iVar0 < Global_1911643)
  {
    DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911643.f_5[iVar0 /*3*/]);
    iVar0++;
  }
  DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1911643.f_4);
  Global_1911643 = 0;
  Global_1911643.f_1 = 0;
}