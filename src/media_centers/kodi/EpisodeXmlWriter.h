#pragma once

#include <QByteArray>

class Episode;

namespace mediaelch {
namespace kodi {

class EpisodeXmlWriter
{
public:
    virtual ~EpisodeXmlWriter() = default;
    virtual QByteArray getEpisodeXml(bool testMode = false) = 0;
    /// Get the episode's XML content with an extra root element: <episodes>
    /// Used for testing to allow multi-episodes in one DOM.
    virtual QString getEpisodeXmlWithSingleRoot(bool testMode);
};

} // namespace kodi
} // namespace mediaelch
