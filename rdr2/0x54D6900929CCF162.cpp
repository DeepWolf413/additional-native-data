// marston7.ysc @ L50097
bool func_1196()
{
  if (TXD::_DOES_STREAMED_TEXTURE_DICT_EXIST(sLocal_83))
  {
    TXD::REQUEST_STREAMED_TEXTURE_DICT(sLocal_83, false);
    if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_83))
    {
      return false;
    }
  }
  return true;
}